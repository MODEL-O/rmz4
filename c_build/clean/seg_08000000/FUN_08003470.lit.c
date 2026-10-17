// undefined FUN_08003470(void)
// entry 0x8003470


void FUN_08003470(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 local_14 [2];
  
  iVar1 = FUN_08000a70(0x200);
  piVar2 = (int *)(param_1 + 0x200);
  *piVar2 = iVar1;
  if (iVar1 == 0) {
    *piVar2 = param_1;
  }
  local_14[0] = 0;
  FUN_08128be0(local_14,*piVar2,0x01000080);
  return;
}


