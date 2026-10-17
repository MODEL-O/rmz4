// undefined FUN_081182f8(void)
// entry 0x81182f8


undefined4 FUN_081182f8(int param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_2 + 4);
  bVar2 = *(byte *)(param_2 + 6);
  puVar5 = (undefined2 *)(param_2 + 8);
  uVar3 = 0;
  if (bVar2 != 0) {
    do {
      uVar4 = 0;
      if (bVar1 != 0) {
        do {
          *(undefined2 *)
           (uVar4 * 2 + (param_4 & 0xff) * 0x40 + param_1 + (param_3 & 0xff) * 2 + uVar3 * 0x40) =
               *puVar5;
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < bVar1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < bVar2);
  }
  return in_lr;
}


