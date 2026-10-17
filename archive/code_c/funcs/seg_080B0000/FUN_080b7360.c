// undefined FUN_080b7360(void)
// entry 0x80b7360


undefined4 FUN_080b7360(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 in_lr;
  byte abStack_1ac [12];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 local_194;
  undefined1 auStack_190 [4];
  undefined4 local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined1 auStack_174 [4];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [4];
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined1 auStack_124 [8];
  undefined1 auStack_11c [96];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [36];
  undefined4 *local_8c [4];
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined4 *local_70;
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
  int local_44;
  int local_40;
  int local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  uint local_24;
  
  local_3c = param_1;
  FUN_08129258(abStack_1ac,DAT_080b7518,9);
  local_38 = &local_1a0;
  local_1a0 = *DAT_080b751c;
  uStack_19c = DAT_080b751c[1];
  uStack_198 = DAT_080b751c[2];
  local_194 = DAT_080b751c[3];
  local_34 = auStack_190;
  FUN_08129258(local_34,DAT_080b7520,2);
  local_18c = *DAT_080b7524;
  uStack_188 = DAT_080b7524[1];
  uStack_184 = DAT_080b7524[2];
  local_180 = DAT_080b7524[3];
  uStack_17c = DAT_080b7524[4];
  uStack_178 = DAT_080b7524[5];
  local_30 = auStack_174;
  FUN_08129258(local_30,DAT_080b7528,3);
  local_170 = *DAT_080b752c;
  uStack_16c = DAT_080b752c[1];
  uStack_168 = DAT_080b752c[2];
  local_164 = DAT_080b752c[3];
  uStack_160 = DAT_080b752c[4];
  uStack_15c = DAT_080b752c[5];
  local_158 = DAT_080b752c[6];
  uStack_154 = DAT_080b752c[7];
  FUN_08129258(auStack_150,DAT_080b7530,4);
  local_14c = *DAT_080b7534;
  uStack_148 = DAT_080b7534[1];
  uStack_144 = DAT_080b7534[2];
  local_140 = DAT_080b7534[3];
  uStack_13c = DAT_080b7534[4];
  uStack_138 = DAT_080b7534[5];
  local_134 = DAT_080b7534[6];
  uStack_130 = DAT_080b7534[7];
  uStack_12c = DAT_080b7534[8];
  local_128 = DAT_080b7534[9];
  FUN_08129258(auStack_124,DAT_080b7538,5);
  FUN_08129258(auStack_11c,DAT_080b753c,0x60);
  local_2c = auStack_bc;
  FUN_08129258(local_2c,DAT_080b7540,0xc);
  local_28 = auStack_b0;
  local_8c[0] = local_38;
  local_8c[1] = local_38;
  local_8c[2] = &local_18c;
  local_8c[3] = &local_18c;
  local_7c = &local_170;
  local_78 = &local_170;
  local_74 = &local_14c;
  local_70 = &local_14c;
  local_6c = auStack_11c;
  FUN_08129258(local_28,local_8c,0x24);
  local_68 = local_34;
  local_64 = local_34;
  local_60 = local_30;
  local_5c = local_30;
  local_48 = local_2c;
  local_58 = auStack_150;
  local_54 = auStack_150;
  local_50 = auStack_124;
  local_4c = auStack_124;
  FUN_08129258(local_8c,&local_68,0x24);
  uVar1 = (uint)*(byte *)(local_3c + 0xbd);
  uVar3 = *(byte *)(local_3c + 10) >> 4 & 1;
  local_24 = uVar3;
  iVar2 = 0;
  if (abStack_1ac[uVar1] != 0) {
    piVar4 = (int *)(local_28 + uVar1 * 4);
    do {
      local_44 = *(int *)(local_3c + 0x54) + *(int *)(iVar2 * 8 + *piVar4) * (uVar3 * 2 + -1);
      local_40 = *(int *)(local_3c + 0x58) + *(int *)(iVar2 * 8 + *piVar4 + 4);
      FUN_080d4c8c(&local_44,(uint)*(byte *)((int)local_8c[uVar1] + iVar2) * 0x1c + DAT_080b7544,0,
                   (local_24 & 0xf) << 4 | uVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)abStack_1ac[uVar1]);
  }
  return in_lr;
}


