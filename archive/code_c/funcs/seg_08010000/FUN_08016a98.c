// undefined FUN_08016a98(void)
// entry 0x8016a98


undefined4 FUN_08016a98(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_080e954c();
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_080e954c();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_080e954c();
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_080e954c();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_080e954c();
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_080e954c();
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_080e954c();
    *(int *)(param_1 + 0x80) = 0;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_080e954c();
    *(int *)(param_1 + 0x84) = 0;
  }
  iVar1 = DAT_08016b58;
  piVar2 = (int *)(DAT_08016b58 + DAT_08016b5c);
  if (*piVar2 != 0) {
    FUN_080e954c();
    *piVar2 = 0;
  }
  piVar2 = (int *)(iVar1 + DAT_08016b60);
  if (*piVar2 != 0) {
    FUN_080e954c();
    *piVar2 = 0;
  }
  piVar2 = (int *)(iVar1 + DAT_08016b64);
  if (*piVar2 != 0) {
    FUN_080e954c();
    *piVar2 = 0;
  }
  FUN_08002b5c(0x74);
  return in_lr;
}


