// undefined FUN_0810df70(void)
// entry 0x810df70


undefined4 FUN_0810df70(void)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0810df90;
  if (*(int *)(DAT_0810df90 + 0x10) != 0) {
    *(byte *)(DAT_0810df94 + 0xe) = *(byte *)(DAT_0810df94 + 0xe) | 1;
    FUN_0810e370(iVar1);
  }
  return in_lr;
}


