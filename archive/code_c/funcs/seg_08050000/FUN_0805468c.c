// undefined FUN_0805468c(void)
// entry 0x805468c


undefined4 FUN_0805468c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x57);
    FUN_0805504c(param_1,4,*(int *)(param_1 + 0x54) < *(int *)(param_1 + 0xc0));
    FUN_0801cf00(param_1,0x2c00);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = FUN_08055068(param_1,*(undefined4 *)(param_1 + 0xc0));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xe) = 3;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


