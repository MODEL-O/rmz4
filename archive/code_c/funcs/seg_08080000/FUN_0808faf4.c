// undefined FUN_0808faf4(void)
// entry 0x808faf4


undefined8 FUN_0808faf4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar2 = 0;
      goto LAB_0808fb52;
    }
    iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (*(int *)(param_1 + 100) < 0) {
      if (-1 < iVar1) {
LAB_0808fb42:
        uVar2 = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        goto LAB_0808fb52;
      }
    }
    else if (iVar1 < 1) goto LAB_0808fb42;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = iVar1;
    if (*(int *)(param_1 + 100) < 0) {
      iVar3 = DAT_0808fb14;
      if (iVar1 < DAT_0808fb14) {
LAB_0808fb20:
        *(int *)(param_1 + 0x5c) = iVar3;
      }
    }
    else {
      iVar3 = 0x400;
      if (0x400 < iVar1) goto LAB_0808fb20;
    }
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  uVar2 = 1;
LAB_0808fb52:
  return CONCAT44(in_lr,uVar2);
}


