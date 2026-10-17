// undefined FUN_080c9d4c(void)
// entry 0x80c9d4c


undefined4 FUN_080c9d4c(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == -1) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xc1) = 0xff;
      iVar4 = *(int *)(param_1 + 0x2c);
      piVar2 = (int *)((uint)*(byte *)(iVar4 + 9) * 4 + DAT_080c9d94);
      *(undefined4 *)(iVar4 + 0xc) = 2;
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (*(char *)(param_1 + 0xb4) == '\0') {
        FUN_0801cf00(param_1,DAT_080c9d98);
      }
      else {
        FUN_0801cf00(param_1,DAT_080c9db8);
        bVar1 = *(byte *)(param_1 + 10);
        bVar3 = ~(bVar1 >> 5) & 1;
        if (bVar3 == 0) {
          bVar1 = bVar1 & 0xdf;
        }
        else {
          bVar1 = bVar1 | 0x20;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(byte *)(param_1 + 0x4d) = bVar3;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | bVar3 << 5;
      }
      *(undefined1 *)(param_1 + 0xc1) = 0;
    }
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_080ca468(param_1);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xc1) = '\x01';
  }
  if (*(char *)(param_1 + 0xc1) != '\0') {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c9e28);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


