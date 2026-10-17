// undefined FUN_080b06c0(void)
// entry 0x80b06c0


undefined4 FUN_080b06c0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar4 = DAT_080b0764;
  iVar3 = DAT_080b0760;
  iVar2 = DAT_080b075c;
  uVar6 = 0;
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0xb7);
  if ((bVar1 & 1) != 0) {
    do {
      uVar6 = uVar6 + 1 & 0xff;
    } while (((int)(uint)bVar1 >> uVar6 & 1U) != 0);
  }
  pbVar5 = (byte *)(*(int *)(param_1 + 0x28) + 0xb7);
  *pbVar5 = (byte)(1 << uVar6) | *pbVar5;
  *(char *)(param_1 + 0x11) = (char)uVar6;
  *(int *)(param_1 + 0x5c) = (int)*(short *)((*(byte *)(uVar6 + iVar3) + 0x40 & 0xff) * 2 + iVar2);
  *(int *)(param_1 + 0x60) = (int)*(short *)((uint)*(byte *)(uVar6 + iVar3) * 2 + iVar2);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(undefined1 *)(param_1 + 0x12) = 0x1e;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,uVar4,param_1 + 0x54,2);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080b0768;
  FUN_0801cf00(param_1,DAT_080b076c);
  return in_lr;
}


