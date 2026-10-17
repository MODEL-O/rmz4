// undefined FUN_0808a174(void)
// entry 0x808a174


undefined8 FUN_0808a174(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar3 = *(int *)(param_1 + 0x58) + 0x800;
    sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + 0x800,iVar3);
    if (sVar1 == 0) {
      sVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) + DAT_0808a1bc,iVar3);
      if (sVar1 == 0) {
        *(undefined1 *)(param_1 + 0xd) = 6;
        *(undefined1 *)(param_1 + 0xe) = 0;
        uVar2 = 1;
        goto LAB_0808a1c2;
      }
    }
  }
  uVar2 = 0;
LAB_0808a1c2:
  return CONCAT44(in_lr,uVar2);
}


