// undefined FUN_08002a1c(void)
// entry 0x8002a1c


undefined4 FUN_08002a1c(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_08002a48;
  for (uVar1 = DAT_08002a44 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_08128714(*puVar2,DAT_08002a4c,0x60);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}


