// undefined FUN_081278e8(void)
// entry 0x81278e8


undefined4 FUN_081278e8(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_08127910;
  for (uVar1 = DAT_0812790c & 0xffff; uVar1 != 0; uVar1 = uVar1 - 1) {
    FUN_08127f84(*puVar2);
    puVar2 = puVar2 + 3;
  }
  return in_lr;
}


