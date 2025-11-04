// A program to break down an ISBN code into the identifying categories

#include <stdio.h>

int main(void)
{
  int gs1_prefix, group_id, pub_code, item_no, check_digit;

  printf("Enter ISBN: ");
  scanf("%3d-%1d-%3d-%5d-%d", &gs1_prefix, &group_id, &pub_code, &item_no, &check_digit);

  printf("GS1 prefix: %3d\nGroup Identifier: %1d\nPublisher code: %3d\nItem number: %5d\nCheck digit: %d\n", gs1_prefix, group_id, pub_code, item_no, check_digit);

  return 0;

}