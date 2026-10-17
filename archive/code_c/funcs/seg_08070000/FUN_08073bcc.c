// undefined FUN_08073bcc(void)
// entry 0x8073bcc


undefined4 FUN_08073bcc(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 in_lr;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  byte abStack_58 [12];
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  byte *local_34;
  undefined1 **local_30;
  byte *local_2c;
  char *local_28;
  short *local_24;
  
  FUN_08129258(auStack_88,PTR_DAT_08073c70,7);
  FUN_08129258(auStack_80,PTR_DAT_08073c74,7);
  FUN_08129258(auStack_78,PTR_DAT_08073c78,7);
  FUN_08129258(auStack_70,PTR_DAT_08073c7c,7);
  FUN_08129258(auStack_68,PTR_DAT_08073c80,7);
  FUN_08129258(auStack_60,PTR_DAT_08073c84,7);
  local_4c = auStack_88;
  local_48 = auStack_80;
  local_44 = auStack_78;
  FUN_08129258(abStack_58,&local_4c,0xc);
  local_40 = auStack_70;
  local_3c = auStack_68;
  local_38 = auStack_60;
  FUN_08129258(&local_4c,&local_40,0xc);
  if ((*(ushort *)(DAT_08073c88 + 8) & 8) == 0) {
    bVar1 = DAT_08073cfc <
            (uint)((*(int *)(*DAT_08073cf4 + 0x54) - *(int *)(param_1 + 0x54)) + DAT_08073cf8);
    local_34 = abStack_58;
    local_30 = &local_4c;
    iVar3 = FUN_08073e00(param_1);
    local_2c = (byte *)(param_1 + 0xc1);
    pbVar4 = (byte *)(param_1 + 0xc0);
    local_28 = (char *)(param_1 + 0xc9);
    local_24 = (short *)(param_1 + 0xca);
    if (2 < *local_2c) {
      iVar5 = 0;
      if (*DAT_08073d00 == *pbVar4) {
        **(undefined1 **)((&local_34)[bVar1] + iVar3 * 4) = 0;
      }
      else {
        do {
          iVar5 = iVar5 + 1;
          if (6 < iVar5) goto LAB_08073d26;
        } while (DAT_08073d00[iVar5] != *pbVar4);
        *(undefined1 *)(*(int *)((&local_34)[bVar1] + iVar3 * 4) + iVar5) = 0;
      }
    }
LAB_08073d26:
    if (((*(byte *)(DAT_08073dd0 + DAT_08073dd4) & 0x10) == 0) ||
       (iVar5 = iVar3 << 2, (*(byte *)(DAT_08073dd8 + 4) & 4) != 0)) {
      iVar5 = iVar3 * 4;
      *(undefined1 *)(*(int *)((&local_34)[bVar1] + iVar5) + 6) = 0;
    }
    if ('\x02' < *(char *)(param_1 + 0xbb)) {
      *(undefined1 *)(*(int *)((&local_34)[bVar1] + iVar5) + 4) = 0;
    }
    if (*local_28 != '\0') {
      iVar3 = *(int *)((&local_34)[bVar1] + iVar5);
      *(undefined1 *)(iVar3 + 6) = 0;
      *(undefined1 *)(iVar3 + 3) = 0;
    }
    if (0 < *local_24) {
      *(undefined1 *)(*(int *)((&local_34)[bVar1] + iVar5) + 2) = 0;
    }
    iVar3 = FUN_08073e30(*(undefined4 *)((&local_34)[bVar1] + iVar5),7);
    bVar2 = *(byte *)(iVar3 + DAT_08073ddc);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)bVar2 + DAT_08073de0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if ((uint)bVar2 == (uint)*pbVar4) {
      bVar2 = *local_2c + 1;
    }
    else {
      *pbVar4 = bVar2;
      bVar2 = 1;
    }
    *local_2c = bVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


