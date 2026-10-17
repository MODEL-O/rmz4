// undefined FUN_080ad298(void)
// entry 0x80ad298


undefined4 FUN_080ad298(int param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_30 [4];
  byte abStack_20 [4];
  int local_1c;
  undefined4 local_18;
  
  local_30[0] = *DAT_080ad358;
  local_30[1] = DAT_080ad358[1];
  local_30[2] = DAT_080ad358[2];
  local_30[3] = DAT_080ad358[3];
  FUN_08129258(abStack_20,DAT_080ad35c,4);
  iVar5 = *(int *)(param_1 + 0x28);
  uVar4 = (uint)*(byte *)(param_1 + 0x11);
  uVar3 = (uint)abStack_20[uVar4];
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_1c = *(int *)(param_1 + 0x54) + (uVar3 * 2 + -1) * 0x1400;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080e8b0c(*(undefined4 *)(iVar5 + 0x28),&local_1c,0);
    FUN_0801cf00(param_1,*(undefined2 *)(local_30 + uVar4));
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    local_1c = *(int *)(param_1 + 0x54) + uVar3 * 0x1000 + DAT_080ad360;
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080cd2dc(&local_1c,0,uVar3);
  }
  pbVar2 = (byte *)(iVar5 + 0xb5);
  *pbVar2 = (byte)(1 << uVar4) | *pbVar2;
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


