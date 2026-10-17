// undefined FUN_080fae88(void)
// entry 0x80fae88


undefined4 FUN_080fae88(int param_1)

{
  short sVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  byte abStack_3c [4];
  int local_38 [3];
  undefined1 *local_2c [3];
  
  local_2c[0] = (undefined1 *)&local_58;
  local_58 = *DAT_080faf34;
  uStack_54 = DAT_080faf34[1];
  uStack_50 = DAT_080faf34[2];
  local_2c[1] = (undefined1 *)&local_4c;
  local_4c = *DAT_080faf38;
  uStack_48 = DAT_080faf38[1];
  uStack_44 = DAT_080faf38[2];
  local_2c[2] = auStack_40;
  FUN_081292b8(local_2c[2],0,3);
  FUN_08129258(abStack_3c,DAT_080faf3c,3);
  local_38[0] = *DAT_080faf40;
  local_38[1] = DAT_080faf40[1];
  local_38[2] = DAT_080faf40[2];
  sVar1 = *DAT_080faf44;
  uVar5 = (uint)*(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080faf48);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(int *)(param_1 + 0x54) = *(int *)(*(int *)(param_1 + 0x28) + 0x54) + local_38[uVar5];
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x58);
  FUN_0801cc9c(param_1);
  bVar4 = local_2c[2][uVar5];
  if (bVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_0801cf00(param_1,*(undefined2 *)(local_2c[sVar1 == 0x10] + uVar5 * 4));
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((uint)abStack_3c[uVar5] * 4 + DAT_080fafbc);
  *(short *)(param_1 + 0x26) = (short)DAT_080fafc0;
  FUN_080fafc4(param_1);
  return in_lr;
}


