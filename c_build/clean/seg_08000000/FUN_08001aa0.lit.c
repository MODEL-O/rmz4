// undefined FUN_08001aa0(void)
// entry 0x8001aa0


void FUN_08001aa0(int param_1)

{
  undefined2 *puVar1;
  FUN_08127d8c();
  puVar1 = 0x04000200;
  if (*(int *)(0x040000b0 + 8) < 0) {
    do {
    } while ((*(uint *)(0x040000b0 + 8) & 0x80000000) != 0);
  }
  if (*(int *)(0x040000bc + 8) < 0) {
    do {
    } while ((*(uint *)(0x040000bc + 8) & 0x80000000) != 0);
  }
  if (*(int *)(0x040000c8 + 8) < 0) {
    do {
    } while ((*(uint *)(0x040000c8 + 8) & 0x80000000) != 0);
  }
  if (*(int *)(0x040000d4 + 8) < 0) {
    do {
    } while ((*(uint *)(0x040000d4 + 8) & 0x80000000) != 0);
  }
  *(undefined2 *)(param_1 + 0x20) = (*(undefined2 *)0x04000200);
  *puVar1 = 0x2000;
  return;
}


