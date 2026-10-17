// undefined FUN_08127920(void)
// entry 0x8127920


undefined4 FUN_08127920(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_08127948;
  for (uVar1 = DAT_08127944 & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_081276f4(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}


