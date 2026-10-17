// undefined FUN_0800202c(void)
// entry 0x800202c


void FUN_0800202c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [4];
  
  piVar1 = 0x040000d4;
  (*(int *)0x040000d4) = (int)local_c;
  iVar2 = 0x03002ac0;
  piVar1[1] = 0x03002ac0;
  piVar1[2] = 0x85000100;
  *piVar1 = iVar2;
  piVar1[1] = 0x5000000;
  piVar1[2] = 0x84000100;
  iVar3 = 0x00000402;
  *(undefined1 *)(iVar2 + 0x00000402) = 0x20;
  *(undefined1 *)(iVar2 + iVar3 + -1) = 0x20;
  *(undefined1 *)(iVar2 + iVar3 + -2) = 0x20;
  *(undefined2 *)(iVar2 + 0x00000406) = 0;
  *(undefined4 *)(iVar2 + iVar3 + 6) = 0;
  return;
}


