










bool  apply_mode0(const void* data, uint32_t size)
{

bool result;
set_lo(PIN_NRST);
set_lo(PIN_CTRL);
time_us(100);

set_hi(PIN_NRST);

time_us(10000);

 
if  (send_communications(data, size) == true)
{
   time_us(1000);
   if ((get_pin(PIN_DONE) == 1) && (get_pin(PIN_SUCCESS) == 1))
   {
      result = true;
    }
    else
    {
        result = false;
    }

}
else
{
   result = false;
}

  return result;
}


bool apply_mode1()
{
set nRTST High
set CTRL Lo
wait x ms
set nRTS Lo
wait y ms
set CTRL Hi
wait a ms
set nRST Hi
wait 100 ms
wait b ms
check level of DONE and SUCCESS if both high then return true otherwise false

}