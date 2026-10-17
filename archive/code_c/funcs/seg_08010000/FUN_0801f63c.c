// undefined FUN_0801f63c(void)
// entry 0x801f63c


undefined4 FUN_0801f63c(undefined1 param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0801f664;
  *(undefined1 *)(DAT_0801f664 + 2) = param_1;
  *(undefined1 *)(iVar1 + 3) = 0xff;
  iVar1 = DAT_0801f668;
  FUN_0801e918(DAT_0801f668);
  FUN_080382e4(*(undefined4 *)(iVar1 + 0x138),iVar1 + 0xd8);
  return in_lr;
}


