// undefined FUN_08053408(void)
// entry 0x8053408


undefined4 FUN_08053408(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_14;
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = 0x13;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  piVar2 = (int *)(param_1 + 0xcc);
  iVar1 = *piVar2;
  *piVar2 = iVar1 + -1;
  iVar1 = FUN_08129050(iVar1 + -1,6);
  if (iVar1 == 0) {
    FUN_08002b10(DAT_0805347c);
    local_14 = *(int *)(param_1 + 0x54) + DAT_08053480;
    local_10 = *(undefined4 *)(param_1 + 0x58);
    FUN_080bf530(param_1,&local_14,0,0x9a);
    FUN_080bf530(param_1,&local_14,0,0x66);
  }
  if (*piVar2 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


