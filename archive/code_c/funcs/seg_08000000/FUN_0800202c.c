// undefined FUN_0800202c(void)
// entry 0x800202c


undefined4 FUN_0800202c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  undefined1 local_c [4];
  
  piVar1 = DAT_0800207c;
  *DAT_0800207c = (int)local_c;
  iVar2 = DAT_08002080;
  piVar1[1] = DAT_08002080;
  piVar1[2] = DAT_08002084;
  *piVar1 = iVar2;
  piVar1[1] = 0x5000000;
  piVar1[2] = DAT_08002088;
  iVar3 = DAT_0800208c;
  *(undefined1 *)(iVar2 + DAT_0800208c) = 0x20;
  *(undefined1 *)(iVar2 + iVar3 + -1) = 0x20;
  *(undefined1 *)(iVar2 + iVar3 + -2) = 0x20;
  *(undefined2 *)(iVar2 + DAT_08002090) = 0;
  *(undefined4 *)(iVar2 + iVar3 + 6) = 0;
  return in_lr;
}


