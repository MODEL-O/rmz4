// undefined FUN_0808c514(void)
// entry 0x808c514


undefined4 FUN_0808c514(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 in_lr;
  byte abStack_1c [8];
  
  FUN_08129258(abStack_1c,DAT_0808c56c,8);
  uVar5 = (uint)*(byte *)(param_1 + 0x11);
  puVar4 = (uint *)(param_1 + 0x8c);
  if ((*puVar4 & 1) != 0) {
    FUN_08006984(4);
  }
  if ((*puVar4 & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808c570);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      if ((*puVar4 & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb6) = *(undefined1 *)(param_1 + 0xd);
    FUN_0808c8f8(param_1);
    return in_lr;
  }
  if ((*puVar4 & 1) == 0) {
LAB_0808c5be:
    if (*(int *)(param_1 + 0x2c) == 0) goto LAB_0808c604;
  }
  else if (*(int *)(param_1 + 0x2c) == 0) {
    uVar2 = FUN_0802adac(0,param_1,uVar5 * 8 + DAT_0808c5fc);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    goto LAB_0808c5be;
  }
  iVar3 = FUN_0802b3e4(*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_0801d1f4(param_1);
    FUN_08005784(param_1 + 0x74,(uint)abStack_1c[uVar5 * 2 + 1] * 0x18 + DAT_0808c600);
    return in_lr;
  }
LAB_0808c604:
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,(uint)abStack_1c[uVar5 * 2] * 0x18 + DAT_0808c62c);
  return in_lr;
}


