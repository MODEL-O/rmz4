// undefined FUN_08059548(void)
// entry 0x8059548


undefined4 FUN_08059548(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [12];
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c [4];
  undefined1 **local_2c;
  undefined1 **local_28;
  undefined1 *local_24;
  
  FUN_08129258(auStack_98,DAT_08059628,7);
  local_24 = auStack_90;
  FUN_08129258(local_24,DAT_0805962c,7);
  FUN_08129258(auStack_88,DAT_08059630,7);
  FUN_08129258(auStack_80,DAT_08059634,7);
  FUN_08129258(auStack_78,DAT_08059638,7);
  FUN_08129258(auStack_70,DAT_0805963c,7);
  FUN_08129258(auStack_68,DAT_08059640,7);
  local_50 = local_24;
  local_54 = auStack_98;
  local_4c = auStack_88;
  FUN_08129258(auStack_60,&local_54,0xc);
  local_48 = auStack_80;
  local_44 = auStack_78;
  local_40 = auStack_70;
  FUN_08129258(&local_54,&local_48,0xc);
  local_3c[0] = auStack_68;
  local_3c[1] = auStack_68;
  local_3c[2] = auStack_68;
  FUN_08129258(&local_48,local_3c,0xc);
  local_3c[3] = auStack_60;
  local_2c = &local_54;
  local_28 = &local_48;
  FUN_08129258(local_3c,local_3c + 3,0xc);
  iVar4 = *(int *)(param_1 + 0x54);
  if ((uint)((iVar4 - *(int *)(param_1 + 0xcc)) + DAT_08059644) < 0x19001) {
    if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xb8)) {
      if ((*(ushort *)(DAT_0805967c + 8) & 8) != 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      if (iVar4 < *(int *)(*DAT_08059698 + 0x54) == (bool)(*(byte *)(param_1 + 10) >> 4 & 1)) {
        iVar5 = 0;
        if ((iVar4 - *(int *)(*DAT_08059698 + 0x54)) + 0x3f00U < 0x7e01) {
          iVar5 = 1;
        }
      }
      else {
        iVar5 = 2;
      }
      iVar4 = FUN_0805977c(param_1);
      pbVar6 = (byte *)(param_1 + 0xb7);
      pbVar3 = (byte *)(param_1 + 0xb6);
      if (2 < *pbVar6) {
        *(undefined1 *)(*(int *)(local_3c[iVar5] + iVar4 * 4) + (uint)*pbVar3) = 0;
      }
      uVar2 = FUN_08059b68(*(undefined4 *)(local_3c[iVar5] + iVar4 * 4),7);
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(uVar2 + DAT_08059710);
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      if (uVar2 == *pbVar3) {
        *pbVar6 = *pbVar6 + 1;
        return in_lr;
      }
      *pbVar6 = 1;
      *pbVar3 = (byte)uVar2;
      return in_lr;
    }
    uVar1 = 0xd;
  }
  else {
    uVar1 = 0xe;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


