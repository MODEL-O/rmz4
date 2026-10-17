// undefined FUN_080c41f0(void)
// entry 0x80c41f0


undefined4 FUN_080c41f0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080c4228);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  iVar3 = DAT_080c42b4;
  if ((*(byte *)(iVar5 + 10) & 0x10) != 0) {
    iVar3 = 0x2c00;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + 0x2c00;
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c42b8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


