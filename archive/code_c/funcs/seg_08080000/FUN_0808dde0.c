// undefined FUN_0808dde0(void)
// entry 0x808dde0


undefined4 FUN_0808dde0(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(iVar5 + 0xd);
  uVar6 = (uint)bVar2;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808de8c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 0xd) = bVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = uVar7 * 2 + -1;
  *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + iVar4 * 0x1800;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + 0x2b00;
  iVar1 = DAT_0808de90;
  *(int *)(param_1 + 100) = iVar4 * *(int *)(uVar6 * 8 + DAT_0808de90);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(uVar6 * 8 + iVar1 + 4);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(iVar5 + 0xb4);
  *(undefined2 *)(param_1 + 0xb8) = *(undefined2 *)(uVar6 * 2 + DAT_0808de94);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(uVar6 + DAT_0808de98);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  *(undefined1 *)(param_1 + 0x25) = 0x18;
  if (uVar7 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)(uVar7 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar7 & 1) << 4);
  FUN_0801cf00(param_1,DAT_0808ded8);
  FUN_0808df7c(param_1);
  return in_lr;
}


