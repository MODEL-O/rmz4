// undefined FUN_08002a50(void)
// entry 0x8002a50


undefined4 FUN_08002a50(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_08002a80;
  for (uVar1 = DAT_08002a7c & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_08128714(*puVar2,DAT_08002a84,0x100);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}


