// undefined FUN_08001354(void)
// entry 0x8001354


undefined4 FUN_08001354(void)

{
  undefined1 *puVar1;
  undefined4 in_lr;
  
  puVar1 = (undefined1 *)
           (*(int *)(DAT_08001380 + DAT_08001384) * 0x18 + DAT_08001380 + DAT_08001388);
  *puVar1 = 1;
  FUN_08000300(puVar1 + 4,puVar1 + 8,*DAT_0800138c);
  return in_lr;
}


