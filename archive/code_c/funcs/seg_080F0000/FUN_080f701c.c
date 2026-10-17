// undefined FUN_080f701c(void)
// entry 0x80f701c


undefined4 FUN_080f701c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  undefined4 in_lr;
  undefined1 auStack_150 [8];
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined4 auStack_d0 [16];
  undefined1 *local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  undefined1 *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 *local_68;
  undefined1 *local_64;
  undefined1 *local_60;
  undefined1 *local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  
  FUN_08129258(auStack_150,DAT_080f719c,6);
  local_50 = auStack_148;
  FUN_08129258(local_50,DAT_080f71a0,6);
  uVar3 = DAT_080f71a4;
  local_4c = auStack_140;
  FUN_08129258(local_4c,DAT_080f71a4,6);
  uVar2 = DAT_080f71a8;
  local_48 = auStack_138;
  FUN_08129258(local_48,DAT_080f71a8,6);
  local_44 = auStack_130;
  FUN_08129258(local_44,DAT_080f71ac,6);
  local_40 = auStack_128;
  FUN_08129258(local_40,DAT_080f71b0,6);
  local_3c = auStack_120;
  FUN_08129258(local_3c,uVar3,6);
  local_38 = auStack_118;
  FUN_08129258(local_38,uVar2,6);
  local_34 = auStack_110;
  FUN_08129258(local_34,DAT_080f71b4,6);
  local_30 = auStack_108;
  FUN_08129258(local_30,DAT_080f71b8,6);
  local_2c = auStack_100;
  FUN_08129258(local_2c,DAT_080f71bc,6);
  FUN_08129258(auStack_f8,DAT_080f71c0,6);
  FUN_08129258(auStack_f0,DAT_080f71c4,6);
  FUN_08129258(auStack_e8,DAT_080f71c8,6);
  FUN_08129258(auStack_e0,DAT_080f71cc,6);
  FUN_08129258(auStack_d8,DAT_080f71d0,6);
  local_8c = local_50;
  local_88 = local_4c;
  local_84 = local_48;
  local_80 = local_44;
  local_7c = local_40;
  local_78 = local_3c;
  local_74 = local_38;
  local_70 = local_34;
  local_6c = local_30;
  local_68 = local_2c;
  local_90 = auStack_150;
  local_64 = auStack_f8;
  local_60 = auStack_f0;
  local_5c = auStack_e8;
  local_58 = auStack_e0;
  local_54 = auStack_d8;
  FUN_08129258(auStack_d0,&local_90,0x40);
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0x11);
  if (5 < *(byte *)(param_1 + 0xf)) {
    iVar4 = *(int *)(param_1 + 0xbc) + 1;
    *(int *)(param_1 + 0xbc) = iVar4;
    if ((*(byte *)(param_1 + 0x13) < 2) &&
       (psVar5 = (short *)auStack_d0
                          [(*(byte *)(param_1 + 10) >> 4 & 1) +
                           (uint)bVar1 * 4 + (uint)*(byte *)(param_1 + 0x13) * 2 & 0xff],
       *psVar5 <= iVar4)) {
      iVar4 = FUN_080c7de0(param_1,(char)psVar5[1],(char)psVar5[2]);
      if (iVar4 != 0) {
        *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
      }
      *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
    }
    return in_lr;
  }
                    /* WARNING: Could not recover jumptable at 0x080f7198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(PTR_PTR_080f71d4 + (uint)*(byte *)(param_1 + 0xf) * 4))();
  return uVar3;
}


