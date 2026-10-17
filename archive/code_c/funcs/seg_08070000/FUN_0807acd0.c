// undefined FUN_0807acd0(void)
// entry 0x807acd0


undefined4 FUN_0807acd0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  undefined4 in_lr;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  
  local_24 = (uint)*(byte *)(param_1 + 0xe);
  if (local_24 == 0) {
    FUN_0801cf00(param_1,DAT_0807ad9c);
    iVar4 = DAT_0807ada8;
    iVar3 = DAT_0807ada4;
    iVar2 = DAT_0807ada0;
    FUN_08001d30(DAT_0807ada0 + DAT_0807ada4,
                 ((uint)*(ushort *)(DAT_0807ada8 + 0x1a6) -
                 (uint)(*(ushort *)(DAT_0807ada0 + DAT_0807ada4 + 6) >> 6)) * 0x20 + 0x10000);
    iVar5 = DAT_0807adb0;
    FUN_08002208(iVar2 + DAT_0807adac,
                 ((uint)*(ushort *)(DAT_0807adb0 + 0x1a6) -
                 (uint)*(byte *)(iVar2 + DAT_0807adac + 7)) * 0x20 + 0x200);
    iVar2 = DAT_0807adb4;
    FUN_08001d30(iVar3 + DAT_0807adb4,
                 ((uint)*(ushort *)(iVar4 + 0x142) -
                 (uint)(*(ushort *)(iVar3 + DAT_0807adb4 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(iVar2 + DAT_0807adac,
                 ((uint)*(ushort *)(iVar5 + 0x142) - (uint)*(byte *)(iVar2 + DAT_0807adac + 7)) *
                 0x20 + 0x200);
    FUN_08002b10(0x1a8);
    *(undefined1 *)(param_1 + 0x12) = 0x9b;
    *(undefined1 *)(param_1 + 0xf) = (undefined1)local_24;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0807af00) {
      return in_lr;
    }
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807af00 - 2);
    FUN_0801cff0(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      if (*(char *)(param_1 + 0xd7) != '\0') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd6) = 0;
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    if (*(byte *)(param_1 + 0x12) < 0x24) {
      *(undefined1 *)(param_1 + 0xd6) = 1;
    }
    else {
      if (((*(ushort *)(DAT_0807ae28 + 8) & 8) == 0) &&
         (*(int *)(*DAT_0807ae2c + 0x54) < *(int *)(param_1 + 0x54) + DAT_0807ae30)) {
        piVar8 = (int *)(*DAT_0807ae2c + 0x1bc);
        *piVar8 = *piVar8 + 0x180;
      }
      if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
        if ((*(byte *)(param_1 + 0x12) >> 2 & 1) == 0) {
          uVar7 = *DAT_0807ae6c * DAT_0807ae70 + DAT_0807ae74;
          *DAT_0807ae6c = uVar7 & 0x7fffffff;
          cVar6 = FUN_08129198((uVar7 & 0x7fffffff) >> 0x10,0x30);
          cVar6 = -cVar6;
        }
        else {
          uVar7 = *DAT_0807ae34 * DAT_0807ae38 + DAT_0807ae3c;
          *DAT_0807ae34 = uVar7 & 0x7fffffff;
          cVar6 = FUN_08129198((uVar7 & 0x7fffffff) >> 0x10,0x30);
        }
        FUN_080e4210(param_1,2,cVar6 + -0x80);
      }
    }
    cVar6 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar6;
    if (cVar6 != -1) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807aec0);
    FUN_0801cff0(param_1);
    FUN_08002b10(DAT_0807aec4);
    local_2c = *(int *)(param_1 + 0x54) + DAT_0807aec8;
    local_28 = *(undefined4 *)(param_1 + 0x58);
    FUN_080cdd9c(param_1,&local_2c,0,0);
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


