// undefined FUN_0808cc3c(void)
// entry 0x808cc3c


undefined4 FUN_0808cc3c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  piVar3 = DAT_0808ccc4;
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar4 = *(int *)(iVar5 + 0x54);
    if (iVar2 < iVar4) {
      *(undefined1 *)(iVar5 + 0xb9) = 0;
      piVar3 = DAT_0808cc64;
    }
    else if (iVar4 < iVar2) {
      *(undefined1 *)(iVar5 + 0xb9) = 1;
      piVar3 = DAT_0808cc78;
    }
    else {
      *(bool *)(iVar5 + 0xb9) = iVar4 < *(int *)(*DAT_0808ccc4 + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar3 != 0)) {
      uVar1 = FUN_0803a578(*piVar3,3,9);
      *(undefined1 *)(iVar5 + 0xb8) = uVar1;
    }
  }
  return in_lr;
}


