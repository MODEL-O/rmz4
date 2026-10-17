// undefined FUN_0800f8f0(void)
// entry 0x800f8f0


void FUN_0800f8f0(int param_1)

{
  if (*(char *)(param_1 + 0xe) == '\0') {
    (*(int *)0x02000a00) = (*(int *)0x02000a00) & ~(ushort)(*(int *)(param_1 + 0x5c) << 8);
    (*(int *)0x0202ea54) = 0x1e000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if ((*(ushort *)(0x0202e910 + 0x14) & 1) != 0) {
    *(undefined4 *)(0x0202e910 + 0x144) = 0xf000;
  }
  return;
}


