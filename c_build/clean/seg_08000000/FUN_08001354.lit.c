// undefined FUN_08001354(void)
// entry 0x8001354


void FUN_08001354(void)

{
  undefined1 *puVar1;
  puVar1 = (undefined1 *)
           (*(int *)(0x03001760 + 0x00001350) * 0x18 + 0x03001760 + 0x00001308);
  *puVar1 = 1;
  FUN_08000300(puVar1 + 4,puVar1 + 8,(*(int *)0x02000000));
  return;
}


