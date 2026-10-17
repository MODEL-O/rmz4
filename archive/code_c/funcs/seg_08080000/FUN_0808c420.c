// undefined FUN_0808c420(void)
// entry 0x808c420


undefined4 FUN_0808c420(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  short asStack_24 [8];
  
  FUN_08129258(asStack_24,DAT_0808c4f0,0x10);
  iVar3 = *(int *)(param_1 + 0x28);
  uVar2 = (uint)*(byte *)(param_1 + 0x11);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808c4f4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(char *)(param_1 + 0xb4) = *(char *)(uVar2 + DAT_0808c4f8);
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)asStack_24[uVar2 * 2];
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)asStack_24[uVar2 * 2 + 1];
  FUN_0801cd28(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0xb4) + -0x80;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,0x2400);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar3 + 0x1c);
  FUN_0808c4fc(param_1);
  return in_lr;
}


