// undefined FUN_080c4078(void)
// entry 0x80c4078


undefined4 FUN_080c4078(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  bVar3 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x5200);
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
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  iVar2 = DAT_080c4110;
  if ((*(byte *)(iVar4 + 10) & 0x10) != 0) {
    iVar2 = 0x2c00;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + 0x2c00;
  if (*(char *)(param_1 + 0x73) == '\x04') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


