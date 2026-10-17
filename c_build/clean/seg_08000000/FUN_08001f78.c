// undefined FUN_08001f78(void)
// entry 0x8001f78


undefined4 FUN_08001f78(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  piVar1 = DAT_08001f90;
  iVar2 = *(int *)DAT_08001f90;
  if (iVar2 < 0x10) {
    *(byte *)(DAT_08001f90 + iVar2 * 3 + 1) = *(byte *)(DAT_08001f90 + iVar2 * 3 + 1) & 0xfc | 2;
    piVar1[iVar2 * 3 + 1] = piVar1[iVar2 * 3 + 1] & 3U | param_3 << 2;
    piVar1[iVar2 * 3 + 2] = param_2;
    piVar1[iVar2 * 3 + 3] = param_1;
    *piVar1 = *piVar1 + 1;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


