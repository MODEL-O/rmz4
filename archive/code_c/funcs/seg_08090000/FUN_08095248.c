// undefined FUN_08095248(void)
// entry 0x8095248


undefined4 FUN_08095248(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  undefined4 in_lr;
  undefined4 local_48 [4];
  byte abStack_38 [4];
  byte abStack_34 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  local_48[0] = *(undefined4 *)PTR_DAT_080952e4;
  local_48[1] = *(undefined4 *)(PTR_DAT_080952e4 + 4);
  local_48[2] = *(undefined4 *)(PTR_DAT_080952e4 + 8);
  local_48[3] = *(undefined4 *)(PTR_DAT_080952e4 + 0xc);
  FUN_08129258(abStack_38,PTR_DAT_080952e8,4);
  FUN_08129258(abStack_34,PTR_DAT_080952ec,4);
  local_30 = *(undefined4 *)PTR_DAT_080952f0;
  uStack_2c = *(undefined4 *)(PTR_DAT_080952f0 + 4);
  uStack_28 = *(undefined4 *)(PTR_DAT_080952f0 + 8);
  local_24 = *(undefined4 *)(PTR_DAT_080952f0 + 0xc);
  iVar3 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080952f4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb4) = 0x40;
  *(undefined2 *)(param_1 + 0xb8) = 0x1000;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  FUN_0801cd28(param_1);
  bVar5 = abStack_38[bVar1];
  if ((*(byte *)(iVar3 + 10) & 0x10) != 0) {
    bVar5 = bVar5 + 1;
  }
  bVar5 = bVar5 & 1;
  if (bVar5 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  FUN_0801cf00(param_1,*(undefined2 *)(local_48 + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_34[bVar1] * 0x18 + DAT_0809538c,param_1 + 0x54,
               (int)*(short *)(&local_30 + bVar1));
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08095390(param_1);
  return in_lr;
}


