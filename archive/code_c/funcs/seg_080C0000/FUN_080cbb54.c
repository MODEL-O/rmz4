// undefined FUN_080cbb54(void)
// entry 0x80cbb54


undefined4 FUN_080cbb54(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x9200);
    iVar4 = DAT_080cbbe4;
    iVar3 = *(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080cbbe4) * 0x380;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar4 = *(short *)((uint)bVar1 * 2 + iVar4) * 0x380;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,DAT_080cbbe8);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar2 = FUN_08007c7c();
  if (sVar2 != 0) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


