// undefined FUN_0808c228(void)
// entry 0x808c228


undefined4 FUN_0808c228(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined4 local_3c [4];
  byte abStack_2c [8];
  byte abStack_24 [4];
  
  local_3c[0] = *DAT_0808c2c0;
  local_3c[1] = DAT_0808c2c0[1];
  local_3c[2] = DAT_0808c2c0[2];
  local_3c[3] = DAT_0808c2c0[3];
  FUN_081292b8(abStack_2c,0,4);
  abStack_2c[3] = 1;
  FUN_081292b8(abStack_2c + 4,0,4);
  abStack_2c[5] = 1;
  FUN_08129258(abStack_24,DAT_0808c2c4,4);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808c2c8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  FUN_0801cc9c(param_1);
  bVar5 = abStack_2c[uVar7];
  if (bVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | bVar5 << 4;
  bVar5 = (abStack_2c + 4)[uVar7];
  if (bVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0x4d) = bVar5;
  *pbVar6 = *pbVar6 & 0xdf | bVar5 << 5;
  FUN_0801cf00(param_1,*(undefined2 *)(local_3c + uVar7));
  FUN_0801cff0(param_1);
  if (uVar7 == 1) {
    iVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar4 + 0x200;
  }
  else if (uVar7 < 2) {
    if (uVar7 == 0) {
      uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
    }
  }
  else {
    if (uVar7 == 2) {
      uVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      if (uVar7 != 3) goto LAB_0808c37c;
      uVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    *(undefined4 *)(param_1 + 0x54) = uVar3;
  }
LAB_0808c37c:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_24[uVar7] * 0x18 + DAT_0808c3fc,param_1 + 0x54,5);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0808c400;
  iVar4 = FUN_0808c1a8(param_1,param_1 + 0x54,1,uVar7);
  *(int *)(param_1 + 0xb4) = iVar4;
  if (iVar4 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808c404);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    FUN_0808c4fc(param_1);
  }
  return in_lr;
}


