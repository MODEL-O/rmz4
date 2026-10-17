// undefined FUN_0808dca4(void)
// entry 0x808dca4


undefined4 FUN_0808dca4(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808dd68);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar6 + 0xbc);
  pbVar1 = DAT_0808dd6c;
  *(byte *)(param_1 + 0xb9) = *DAT_0808dd6c;
  *(byte *)(param_1 + 0xba) = pbVar1[1];
  *(undefined2 *)(param_1 + 0xbc) = 0;
  iVar2 = DAT_0808dd70;
  *(uint *)(param_1 + 0x54) =
       *(int *)(iVar6 + 0x54) +
       (uVar7 * 2 + -1) *
       (*(short *)((*(byte *)(param_1 + 0xb9) + 0x40 & 0xff) * 2 + DAT_0808dd70) * 4 + 0x3600);
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar6 + 0x58) + 0xc00 + *(short *)((uint)*(byte *)(param_1 + 0xba) * 2 + iVar2) * 6;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  if (uVar7 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  *(char *)(param_1 + 0x4c) = (char)(uVar7 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar7 & 1) << 4);
  FUN_0801cf00(param_1,DAT_0808dddc);
  uVar5 = FUN_0808dc1c(param_1,1,uVar7,0);
  *(undefined4 *)(param_1 + 100) = uVar5;
  uVar5 = FUN_0808dc1c(param_1,2,uVar7,1);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  uVar5 = FUN_0808dc1c(param_1,2,uVar7,0);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  FUN_0808df7c(param_1);
  return in_lr;
}


