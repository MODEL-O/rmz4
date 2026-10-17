// undefined FUN_08001ea4(void)
// entry 0x8001ea4


undefined8 FUN_08001ea4(uint param_1,uint param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  puVar1 = DAT_08001ee4;
  uVar4 = 0;
  if (*DAT_08001ee4 != 0) {
    puVar5 = DAT_08001ee4 + 2;
    puVar3 = DAT_08001ee4;
    do {
      puVar3 = puVar3 + 3;
      if ((*puVar3 == param_1) && (*puVar5 == param_2)) goto LAB_08001f14;
      puVar5 = puVar5 + 3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *DAT_08001ee4);
  }
  if (*DAT_08001ee4 < 0x10) {
    DAT_08001ee4[uVar4 * 3 + 2] = param_2;
    *(byte *)(puVar1 + uVar4 * 3 + 1) = (byte)puVar1[uVar4 * 3 + 1] & 0xfc;
    puVar1[uVar4 * 3 + 3] = param_1;
    *puVar1 = *puVar1 + 1;
LAB_08001f14:
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return CONCAT44(in_lr,uVar2);
}


