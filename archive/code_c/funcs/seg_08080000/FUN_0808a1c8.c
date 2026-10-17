// undefined FUN_0808a1c8(void)
// entry 0x808a1c8


undefined8 FUN_0808a1c8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar3 = DAT_0808a228;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar3 = 0x800;
    }
    sVar1 = FUN_08007c7c(iVar3 + *(int *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_0808a228);
    if (sVar1 != 0) goto LAB_0808a1fc;
  }
  else {
LAB_0808a1fc:
    iVar3 = *(int *)(*DAT_0808a22c + 0x54) - *(int *)(param_1 + 0x54);
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    if ((DAT_0808a230 < iVar3) || (*(int *)(*DAT_0808a22c + 0x58) <= *(int *)(param_1 + 0x58))) {
      uVar2 = 0;
      goto LAB_0808a236;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 7;
  *(undefined1 *)(param_1 + 0xe) = 0;
  uVar2 = 1;
LAB_0808a236:
  return CONCAT44(in_lr,uVar2);
}


