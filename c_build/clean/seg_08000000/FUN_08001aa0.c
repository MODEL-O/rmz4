// undefined FUN_08001aa0(void)
// entry 0x8001aa0


void FUN_08001aa0(int param_1)

{
  undefined2 *puVar1;
  FUN_08127d8c();
  puVar1 = DAT_08001b20;
  if (*(int *)(DAT_08001b10 + 8) < 0) {
    do {
    } while ((*(uint *)(DAT_08001b10 + 8) & 0x80000000) != 0);
  }
  if (*(int *)(DAT_08001b14 + 8) < 0) {
    do {
    } while ((*(uint *)(DAT_08001b14 + 8) & 0x80000000) != 0);
  }
  if (*(int *)(DAT_08001b18 + 8) < 0) {
    do {
    } while ((*(uint *)(DAT_08001b18 + 8) & 0x80000000) != 0);
  }
  if (*(int *)(DAT_08001b1c + 8) < 0) {
    do {
    } while ((*(uint *)(DAT_08001b1c + 8) & 0x80000000) != 0);
  }
  *(undefined2 *)(param_1 + 0x20) = *(int *)DAT_08001b20;
  *puVar1 = 0x2000;
  return;
}


