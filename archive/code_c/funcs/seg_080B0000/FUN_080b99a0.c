// undefined FUN_080b99a0(void)
// entry 0x80b99a0


undefined4 FUN_080b99a0(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801ce54();
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb | 1;
    FUN_0801cf00(param_1,DAT_080b9a3c);
    *(undefined1 *)(param_1 + 0x13) = 0x28;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined2 *)(param_1 + 0x50) = 0x100;
    *(undefined2 *)(param_1 + 0x52) = 0x100;
  }
  if ((*(byte *)(param_1 + 0x13) & 3) == 0) {
    FUN_080e67ac(param_1 + 0x54,*(undefined1 *)(param_1 + 0x12),*(byte *)(param_1 + 10) >> 4 & 1);
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
  }
  cVar2 = FUN_080b9e18(param_1);
  if (cVar2 != '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b9a40);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


