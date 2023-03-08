#include <gtest/gtest.h>

DEFINE_ENUM(TimeUnit, Seconds, Minutes, Hours)

struct Duration {
    double Value;
    TimeUnit Unit;

    bool operator==(const Duration &) const = default;
};

DESCRIBE_STRUCT(Duration, (), (Value, Unit))

TEST(JSONTest, JSONSerialize) {
    EXPECT_EQ(JSONSerialize(Duration{1, TimeUnit::Seconds}),
              R"({"Value":1E0,"Unit":"Seconds"})");
}

TEST(JSONTest, JSONDeserialize) {
    EXPECT_EQ(JSONDeserialize<Duration>(R"({"Value":1,"Unit":"Minutes"})"),
              (Duration{1, TimeUnit::Minutes}));
    EXPECT_ANY_THROW(JSONDeserialize<Duration>(R"({"Value":1,"Unit":"Meters"})"));
}
