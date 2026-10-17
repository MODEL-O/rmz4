// undefined FUN_08065a08(void)
// entry 0x8065a08


undefined4 FUN_08065a08(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  piVar3 = DAT_08065a90;
  iVar5 = *(int *)(param_1 + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x2c) + 0x54);
    iVar4 = *(int *)(iVar5 + 0x54);
    if (iVar2 < iVar4) {
      *(undefined1 *)(iVar5 + 0xb6) = 0;
      piVar3 = DAT_08065a30;
    }
    else if (iVar4 < iVar2) {
      *(undefined1 *)(iVar5 + 0xb6) = 1;
      piVar3 = DAT_08065a44;
    }
    else {
      *(bool *)(iVar5 + 0xb6) = iVar4 < *(int *)(*DAT_08065a90 + 0x54);
    }
    if ((((*(uint *)(param_1 + 0x14) & 0x20000) != 0) && (*piVar3 != 0)) &&
       (*(char *)(iVar5 + 0xb4) == '\b')) {
      uVar1 = FUN_0803a578(*piVar3,8,0);
      *(undefined1 *)(iVar5 + 0xcf) = uVar1;
    }
  }
  return in_lr;
}


