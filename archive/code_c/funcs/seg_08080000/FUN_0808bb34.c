// undefined FUN_0808bb34(void)
// entry 0x808bb34


undefined4 FUN_0808bb34(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  piVar3 = DAT_0808bbbc;
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar5 = *(int *)(param_1 + 0x2c);
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar4 = *(int *)(iVar5 + 0x54);
    if (iVar2 < iVar4) {
      *(undefined1 *)(iVar5 + 0xbd) = 0;
      piVar3 = DAT_0808bb5c;
    }
    else if (iVar4 < iVar2) {
      *(undefined1 *)(iVar5 + 0xbd) = 1;
      piVar3 = DAT_0808bb70;
    }
    else {
      *(bool *)(iVar5 + 0xbd) = iVar4 < *(int *)(*DAT_0808bbbc + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0))
       && (*piVar3 != 0)) {
      uVar1 = FUN_0803a578(*piVar3,3,7);
      *(undefined1 *)(iVar5 + 0xbc) = uVar1;
    }
  }
  return in_lr;
}


