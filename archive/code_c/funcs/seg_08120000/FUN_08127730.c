// undefined FUN_08127730(void)
// entry 0x8127730


undefined4 FUN_08127730(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_08128be4(DAT_08127784 & 0xfffffffe,DAT_08127788,DAT_0812778c);
  FUN_08127b30(DAT_08127790);
  FUN_081279ec(DAT_08127794);
  FUN_08127ca0(DAT_08127798);
  piVar3 = DAT_081277a0;
  for (uVar1 = DAT_0812779c & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    iVar2 = *piVar3;
    FUN_08127e28(iVar2,piVar3[1],(char)piVar3[2]);
    *(char *)(iVar2 + 0xb) = (char)*(undefined2 *)((int)piVar3 + 10);
    *(undefined4 *)(iVar2 + 0x18) = DAT_081277a4;
    piVar3 = piVar3 + 3;
  }
  return in_lr;
}


