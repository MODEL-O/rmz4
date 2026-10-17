// undefined FUN_0802aa44(void)
// entry 0x802aa44


undefined4 FUN_0802aa44(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_lr;
  
  puVar1 = DAT_0802aa8c;
  *DAT_0802aa8c = 0x7800;
  puVar1[1] = 0x5000;
  FUN_08002c0c(puVar1 + -3,puVar1,0,0);
  iVar2 = (int)puVar1 + DAT_0802aa90;
  FUN_08003384(iVar2);
  FUN_080033bc(iVar2,puVar1 + -3);
  FUN_0810a1b4((int)puVar1 + DAT_0802aa94,DAT_0802aa98,0x40);
  return in_lr;
}


