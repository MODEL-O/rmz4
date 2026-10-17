// undefined FUN_080942ec(void)
// entry 0x80942ec


undefined4 FUN_080942ec(int param_1)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x10) == '\x02') {
    puVar4 = (uint *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_08094380);
    uVar2 = *puVar4;
    pbVar3 = (byte *)(((int)uVar2 >> 3) + DAT_0809437c + 4);
    *pbVar3 = (byte)(1 << (uVar2 & 7)) | *pbVar3;
    uVar2 = *puVar4;
    pbVar3 = (byte *)(((int)uVar2 >> 3) + DAT_08094384);
    *pbVar3 = (byte)(1 << (uVar2 & 7)) | *pbVar3;
  }
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  local_18 = *(undefined4 *)(param_1 + 0x54);
  local_14 = *(int *)(param_1 + 0x58) + DAT_08094388;
  FUN_080d0dc4(0,&local_18,0x200,*(undefined1 *)(param_1 + 0xba));
  iVar1 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_080943ac));
  return in_lr;
}


