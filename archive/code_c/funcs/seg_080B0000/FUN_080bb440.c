// undefined FUN_080bb440(void)
// entry 0x80bb440


undefined4 FUN_080bb440(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  byte abStack_34 [4];
  undefined4 *local_30 [3];
  int local_24;
  
  local_30[0] = &local_64;
  local_64 = *DAT_080bb4d8;
  uStack_60 = DAT_080bb4d8[1];
  uStack_5c = DAT_080bb4d8[2];
  local_58 = DAT_080bb4d8[3];
  uStack_54 = DAT_080bb4d8[4];
  uStack_50 = DAT_080bb4d8[5];
  local_4c = DAT_080bb4d8[6];
  uStack_48 = DAT_080bb4d8[7];
  local_30[1] = &local_44;
  local_44 = *DAT_080bb4dc;
  uStack_40 = DAT_080bb4dc[1];
  uStack_3c = DAT_080bb4dc[2];
  local_38 = DAT_080bb4dc[3];
  FUN_08129258(abStack_34,DAT_080bb4e0,2);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080bb4e4);
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    FUN_08002b10(0x198);
    FUN_0801cf00(param_1,DAT_080bb4e8);
    local_30[2] = (undefined4 *)*(undefined4 *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58) + DAT_080bb4ec;
    iVar3 = *(int *)(param_1 + 0x68);
    for (iVar4 = 0; iVar4 < (int)(uint)abStack_34[iVar3]; iVar4 = iVar4 + 1) {
      FUN_080d016c(uVar2,local_30 + 2,local_30[iVar3] + iVar4 * 2);
      iVar3 = *(int *)(param_1 + 0x68);
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))))
  {
    if (*(int *)(param_1 + 0x68) < 2) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 5;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


