// undefined FUN_080ad170(void)
// entry 0x80ad170


undefined4 FUN_080ad170(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  undefined4 local_20 [4];
  
  local_20[0] = *DAT_080ad1dc;
  local_20[1] = DAT_080ad1dc[1];
  local_20[2] = DAT_080ad1dc[2];
  local_20[3] = DAT_080ad1dc[3];
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar3 = *(int *)(param_1 + 0xb8);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0xb4) = 1;
      *(int *)(param_1 + 0xb8) = 0;
      pcVar4 = (char *)(iVar6 + 0xbc);
      cVar2 = *pcVar4;
      if (cVar2 != '\0') {
        *pcVar4 = cVar2 + -1;
      }
    }
    FUN_0801cf00(param_1,*(undefined2 *)(local_20 + bVar1));
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  pbVar5 = (byte *)(iVar6 + 0xb5);
  *pbVar5 = *pbVar5 & ~(byte)(1 << (uint)bVar1);
  return in_lr;
}


