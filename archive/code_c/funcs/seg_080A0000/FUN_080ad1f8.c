// undefined FUN_080ad1f8(void)
// entry 0x80ad1f8


undefined4 FUN_080ad1f8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_28 [4];
  
  local_28[0] = *DAT_080ad274;
  local_28[1] = DAT_080ad274[1];
  local_28[2] = DAT_080ad274[2];
  local_28[3] = DAT_080ad274[3];
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(local_28 + uVar3));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pbVar2 = (byte *)(iVar4 + 0xbb);
  if (((int)(uint)*pbVar2 >> uVar3 & 1U) == 0) {
    *(byte *)(iVar4 + 0xb5) = *(byte *)(iVar4 + 0xb5) & ~(byte)(1 << uVar3);
  }
  else {
    bVar1 = (byte)(1 << uVar3);
    *(byte *)(iVar4 + 0xb5) = bVar1 | *(byte *)(iVar4 + 0xb5);
    *pbVar2 = *pbVar2 & ~bVar1;
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080ad278));
  }
  return in_lr;
}


